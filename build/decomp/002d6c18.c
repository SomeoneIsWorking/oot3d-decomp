// OoT3D decomp @ 002d6c18  name=FUN_002d6c18  size=500

void FUN_002d6c18(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;

  uVar7 = 0;
  iVar4 = FUN_00366684(0);
  if (iVar4 == DAT_002d6e0c) {
    return;
  }
  iVar4 = FUN_00366684(3);
  if (iVar4 == DAT_002d6e10) {
    FUN_003655d0(3,0);
  }
  iVar2 = DAT_002d6e1c;
  iVar4 = DAT_002d6e14;
  uVar5 = *(int *)(DAT_002d6e14 + 0x74) + DAT_002d6e18;
  if (0x54 < uVar5) {
    uVar5 = 0;
  }
  uVar6 = param_1 + DAT_002d6e18;
  if ((*(byte *)(DAT_002d6e1c + uVar5) & 0x20) != 0) {
    uVar5 = uVar6;
    if (0x54 < uVar6) {
      uVar5 = 0;
    }
    if ((*(byte *)(DAT_002d6e1c + uVar5) & 0x10) != 0) {
      uVar1 = *(ushort *)(DAT_002d6e14 + 0x40);
      if ((uVar1 & 0x3f) != 0) {
        uVar7 = 0x2d;
      }
      FUN_0036ec40(0,param_1,uVar7);
      FUN_00356018(0,7,(int)(char)uVar1);
      FUN_0034bdb8(0);
      if (param_2 != 0) {
        FUN_00356018(0,6,0x39);
      }
      FUN_0034bdb8(0);
      *(undefined2 *)(iVar4 + 0x40) = 0;
      goto LAB_002d6d98;
    }
  }
  uVar5 = uVar6;
  if (0x54 < uVar6) {
    uVar5 = 0;
  }
  if ((*(byte *)(DAT_002d6e1c + uVar5) & 0x40) == 0) {
    cVar3 = -1;
  }
  else {
    cVar3 = '\x01';
  }
  FUN_0036ec40(0,param_1,0);
  FUN_00356018(0,7,(int)cVar3);
  FUN_0034bdb8(0);
  if (param_2 != 0) {
    FUN_00356018(0,6,0x30);
  }
  FUN_0034bdb8(0);
  if (0x54 < uVar6) {
    uVar6 = 0;
  }
  if ((*(byte *)(iVar2 + uVar6) & 0x20) == 0) {
    *(undefined2 *)(iVar4 + 0x40) = 0xc0;
  }
LAB_002d6d98:
  *(int *)(iVar4 + 0x74) = param_1;
  iVar4 = FUN_0032c800(1);
  if (iVar4 == 0) {
    return;
  }
  FUN_00355fac(0,1,0);
  FUN_002d7878(1,0,1,0x7f);
  FUN_00356058(0,0xffff);
  FUN_002d7854(1,0,0,0xf);
  return;
}
