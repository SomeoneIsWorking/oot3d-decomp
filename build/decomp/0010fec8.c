// OoT3D decomp @ 0010fec8  name=FUN_0010fec8  size=252

void FUN_0010fec8(int param_1,int param_2)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;

  uVar3 = FUN_0036ae04();
  uVar5 = (uint)*(byte *)(param_1 + 2);
  uVar4 = uVar3 - uVar5;
  bVar6 = uVar3 == uVar5;
  uVar2 = uVar3;
  if (!bVar6) {
    uVar4 = (uint)*(short *)(param_1 + 0x21a);
    uVar2 = uVar4;
  }
  if ((bVar6 || uVar2 == 0) || (int)uVar4 < 0 != (bVar6 && SBORROW4(uVar3,uVar5))) {
    if (*(short *)(param_1 + 0x218) == 0) {
      FUN_00375bcc(param_1,DAT_0010ffcc);
    }
    *(short *)(param_1 + 0x218) = *(short *)(param_1 + 0x218) + 1;
    FUN_00372aa8(param_1 + 0x228,0xffffff56,10);
    *(short *)(param_1 + 0x226) = *(short *)(param_1 + 0x226) + *(short *)(param_1 + 0x228);
    sVar1 = *(short *)(param_1 + 0x218);
    *(short *)(param_1 + 0x21e) = sVar1 * 0xd5 + 0x26c0;
    *(short *)(param_1 + 0x220) = sVar1 * (short)DAT_0010ffd0 + 8000;
    if (0x1d < sVar1) {
      *(undefined4 *)(param_1 + 0x1a4) = DAT_0010ffd4;
      *(undefined2 *)(param_1 + 0x21c) = 2;
      *(undefined2 *)(param_1 + 0x21e) = 0x3fc0;
      *(undefined2 *)(param_1 + 0x220) = 0x3fc0;
      *(undefined2 *)(param_1 + 0x222) = 0x3fc0;
      *(undefined2 *)(param_1 + 0x224) = 0x3fc0;
      *(undefined2 *)(param_1 + 0x228) = 0xff56;
      *(undefined2 *)(param_1 + 0x218) = 0;
      uVar4 = ((uint)*(ushort *)(param_1 + 0x1c) << 0x12) >> 0x1a;
      if (0x1f < uVar4) {
        *(uint *)(param_2 + 0x222c) = *(uint *)(param_2 + 0x222c) | 1 << (uVar4 - 0x20 & 0xff);
        return;
      }
      *(uint *)(param_2 + 0x2228) = *(uint *)(param_2 + 0x2228) | 1 << uVar4;
      return;
    }
    if (sVar1 == 0x17) {
      *(undefined2 *)(param_1 + 0x21c) = 1;
      FUN_00375bcc(param_1,DAT_0010ffd8);
      return;
    }
  }
  return;
}
