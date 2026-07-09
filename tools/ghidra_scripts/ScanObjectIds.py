# -*- coding: utf-8 -*-
#@runtime Jython
# Scan gActorOverlayTable for ActorProfile.objectId matches against a target set.
# Env: OOT3D_OBJIDS = comma-separated decimal object ids to match.
import os

af = currentProgram.getAddressFactory().getDefaultAddressSpace()
mem = currentProgram.getMemory()

TABLE = 0x0050CD84
STRIDE = 0x20
PROFILE_PTR_OFF = 0x14
OBJID_OFF = 0x08
CATEGORY_OFF = 0x01

targets = set(int(x) for x in os.environ.get("OOT3D_OBJIDS", "").split(",") if x)
print("targets:", targets)

for i in range(0, 1200):
    entry = TABLE + i * STRIDE
    try:
        profptr = mem.getInt(af.getAddress(entry + PROFILE_PTR_OFF))
    except Exception:
        continue
    if profptr == 0:
        continue
    try:
        objid = mem.getShort(af.getAddress(profptr + OBJID_OFF)) & 0xffff
        category = mem.getByte(af.getAddress(profptr + CATEGORY_OFF)) & 0xff
    except:
        continue
    if objid in targets:
        print("actorId=%4d objectId=%5d category=%d profile=0x%08x" % (i, objid, category, profptr))
