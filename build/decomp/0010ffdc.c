// OoT3D decomp @ 0010ffdc  name=FUN_0010ffdc  size=240

void FUN_0010ffdc(int param_1)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;

  if (((uint)*(ushort *)(param_1 + 0x1c) << 0x1a) >> 0x1e == 1) {
    uVar3 = FUN_0036ae04();
    uVar7 = (uint)*(byte *)(param_1 + 2);
    uVar4 = uVar3 - uVar7;
    bVar8 = uVar3 == uVar7;
    uVar2 = uVar3;
    if (!bVar8) {
      uVar4 = (uint)*(short *)(param_1 + 0x21a);
      uVar2 = uVar4;
    }
    if ((!bVar8 && uVar2 != 0) && (int)uVar4 < 0 == (bVar8 && SBORROW4(uVar3,uVar7))) {
      return;
    }
  }
  *(short *)(param_1 + 0x218) = *(short *)(param_1 + 0x218) + -1;
  FUN_00372aa8(param_1 + 0x228,0,10);
  *(short *)(param_1 + 0x226) = *(short *)(param_1 + 0x226) + *(short *)(param_1 + 0x228);
  sVar1 = *(short *)(param_1 + 0x218);
  iVar5 = (int)sVar1;
  *(short *)(param_1 + 0x21e) = sVar1 * 0xd5 + 0x26c0;
  iVar6 = iVar5;
  if (iVar5 < 1) {
    iVar6 = param_1;
  }
  *(short *)(param_1 + 0x220) = sVar1 * (short)DAT_00110098 + 8000;
  if (0 < iVar5) {
    if (iVar6 != 0x17) {
      return;
    }
    *(undefined2 *)(param_1 + 0x21c) = 0;
    FUN_00375bcc(param_1,DAT_0011009c);
    return;
  }
  *(undefined4 *)(iVar6 + 0x1a4) = DAT_001a2508;
  *(undefined2 *)(iVar6 + 0x21c) = 0;
  *(undefined2 *)(iVar6 + 0x21e) = 0x26c0;
  *(undefined2 *)(iVar6 + 0x220) = 8000;
  *(undefined2 *)(iVar6 + 0x222) = 0x3fc0;
  *(undefined2 *)(iVar6 + 0x224) = 0x3fc0;
  return;
}
