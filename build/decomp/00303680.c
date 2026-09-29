// OoT3D decomp @ 00303680  name=FUN_00303680  size=168

int FUN_00303680(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;

  if ((code *)*DAT_00303728 == (code *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = (*(code *)*DAT_00303728)(0x10000,0x100,0,0x278);
  }
  if (iVar4 != 0) {
    FUN_00343280(iVar4,0x278);
    uVar3 = DAT_00303734;
    uVar2 = DAT_00303730;
    uVar1 = DAT_0030372c;
    iVar6 = 0;
    do {
      iVar5 = iVar4 + iVar6 * 0x18;
      iVar8 = iVar4 + iVar6 * 0x10;
      *(undefined4 *)(iVar5 + 4) = 4;
      iVar7 = iVar6 + 1;
      *(undefined4 *)(iVar5 + 8) = uVar1;
      *(undefined4 *)(iVar8 + 0x130) = uVar2;
      *(undefined4 *)(iVar8 + 300) = uVar2;
      *(undefined4 *)(iVar8 + 0x128) = uVar2;
      iVar6 = iVar4 + iVar6 * 0xc;
      *(undefined4 *)(iVar8 + 0x134) = uVar3;
      *(undefined4 *)(iVar6 + 0x1ec) = 0;
      *(undefined4 *)(iVar6 + 0x1e8) = 0x3f000000;
      *(undefined4 *)(iVar6 + 0x1f0) = 0;
      iVar6 = iVar7;
    } while (iVar7 < 0xc);
  }
  return iVar4;
}
