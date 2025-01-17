"""LCM type definitions
This file automatically generated by lcm.
DO NOT MODIFY BY HAND!!!!
"""
import os
import sys
# print(sys.path)
# print()
# print(__file__)
# exit()
# sys.path.append('/home/laser14/Documents/lcm-ros2_bridge/install/lcm_ros2_bridge/lib/python3.10/site-packages/lcm_ros2_bridge/')

# append lcm_ros2_bridge to sys.path

try:
    import cStringIO.StringIO as BytesIO
except ImportError:
    from io import BytesIO
import struct

# import lcm_messages.blueprint_oculus_sonar_image
import lcm_ros2_bridge.lcm_messages.blueprint_oculus_sonar_image
import lcm_ros2_bridge.lcm_messages.blueprint_oculus_sonar_fire

class blueprint_oculus_sonar_ping(object):
    __slots__ = ["timestamp", "ping_id", "part_number", "start_time", "num_ranges", "num_beams", "bearings", "range_resolution", "fire_msg", "image_msg"]

    __typenames__ = ["int64_t", "int32_t", "int16_t", "int32_t", "int32_t", "int32_t", "int16_t", "float", "lcm_ros2_bridge.lcm_messages.blueprint_oculus_sonar_fire", "lcm_ros2_bridge.lcm_messages.blueprint_oculus_sonar_image"]

    __dimensions__ = [None, None, None, None, None, None, ["num_beams"], None, None, None]

    def __init__(self):
        self.timestamp = 0
        self.ping_id = 0
        self.part_number = 0
        self.start_time = 0
        self.num_ranges = 0
        self.num_beams = 0
        self.bearings = []
        self.range_resolution = 0.0
        self.fire_msg = lcm_ros2_bridge.lcm_messages.blueprint_oculus_sonar_fire()
        self.image_msg = lcm_ros2_bridge.lcm_messages.blueprint_oculus_sonar_image()

    def encode(self):
        buf = BytesIO()
        buf.write(blueprint_oculus_sonar_ping._get_packed_fingerprint())
        self._encode_one(buf)
        return buf.getvalue()

    def _encode_one(self, buf):
        buf.write(struct.pack(">qihiii", self.timestamp, self.ping_id, self.part_number, self.start_time, self.num_ranges, self.num_beams))
        buf.write(struct.pack('>%dh' % self.num_beams, *self.bearings[:self.num_beams]))
        buf.write(struct.pack(">f", self.range_resolution))
        assert self.fire_msg._get_packed_fingerprint() == lcm_ros2_bridge.lcm_messages.blueprint_oculus_sonar_fire._get_packed_fingerprint()
        self.fire_msg._encode_one(buf)
        assert self.image_msg._get_packed_fingerprint() == lcm_ros2_bridge.lcm_messages.blueprint_oculus_sonar_image._get_packed_fingerprint()
        self.image_msg._encode_one(buf)

    def decode(data):
        if hasattr(data, 'read'):
            buf = data
        else:
            buf = BytesIO(data)
        if buf.read(8) != blueprint_oculus_sonar_ping._get_packed_fingerprint():
            raise ValueError("Decode error")
        return blueprint_oculus_sonar_ping._decode_one(buf)
    decode = staticmethod(decode)

    def _decode_one(buf):
        self = blueprint_oculus_sonar_ping()
        self.timestamp, self.ping_id, self.part_number, self.start_time, self.num_ranges, self.num_beams = struct.unpack(">qihiii", buf.read(26))
        self.bearings = struct.unpack('>%dh' % self.num_beams, buf.read(self.num_beams * 2))
        self.range_resolution = struct.unpack(">f", buf.read(4))[0]
        self.fire_msg = lcm_ros2_bridge.lcm_messages.blueprint_oculus_sonar_fire._decode_one(buf)
        self.image_msg = lcm_ros2_bridge.lcm_messages.blueprint_oculus_sonar_image._decode_one(buf)
        return self
    _decode_one = staticmethod(_decode_one)

    def _get_hash_recursive(parents):
        if blueprint_oculus_sonar_ping in parents: return 0
        newparents = parents + [blueprint_oculus_sonar_ping]
        tmphash = (0xccb96efcc3d50657+ lcm_ros2_bridge.lcm_messages.blueprint_oculus_sonar_fire._get_hash_recursive(newparents)+ lcm_ros2_bridge.lcm_messages.blueprint_oculus_sonar_image._get_hash_recursive(newparents)) & 0xffffffffffffffff
        tmphash  = (((tmphash<<1)&0xffffffffffffffff) + (tmphash>>63)) & 0xffffffffffffffff
        return tmphash
    _get_hash_recursive = staticmethod(_get_hash_recursive)
    _packed_fingerprint = None

    def _get_packed_fingerprint():
        if blueprint_oculus_sonar_ping._packed_fingerprint is None:
            blueprint_oculus_sonar_ping._packed_fingerprint = struct.pack(">Q", blueprint_oculus_sonar_ping._get_hash_recursive([]))
        return blueprint_oculus_sonar_ping._packed_fingerprint
    _get_packed_fingerprint = staticmethod(_get_packed_fingerprint)

    def get_hash(self):
        """Get the LCM hash of the struct"""
        return struct.unpack(">Q", blueprint_oculus_sonar_ping._get_packed_fingerprint())[0]

