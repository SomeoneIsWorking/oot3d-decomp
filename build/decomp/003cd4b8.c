// OoT3D decomp @ 003cd4b8  name=FUN_003cd4b8  size=384

void FUN_003cd4b8(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  short sVar4;
  uint in_fpscr;

  if (*(short *)(param_1 + 0x116) == 0x2085) {
    sVar4 = 5;
  }
  else {
    sVar4 = 10;
  }
  iVar2 = FUN_003769d8(param_2 + 0x28a0);
  if ((iVar2 == 4) && (iVar2 = FUN_00346964(param_2), iVar2 != 0)) {
    iVar2 = FUN_00369f3c(param_2);
    uVar3 = DAT_003cd640;
    uVar1 = DAT_003cd638;
    if (iVar2 == 0) {
      if (*(short *)(DAT_003cd64c + 0x48) < sVar4) {
        FUN_0036be34(param_2,0x85);
        uVar1 = DAT_003cd654;
        *(undefined4 *)(param_1 + 0xbac) = DAT_003cd650;
        *(undefined4 *)(param_1 + 0xbb0) = uVar1;
      }
      else {
        FUN_00376a60((int)-sVar4);
        uVar3 = DAT_003cd658;
        *(undefined4 *)(param_1 + 0xbb0) = DAT_003cd654;
        *(undefined4 *)(param_1 + 0xbac) = uVar3;
        uVar3 = DAT_003cd65c;
        *(ushort *)(param_1 + 0xc3c) = *(ushort *)(param_1 + 0xc3c) & 0xffef;
        FUN_00375c08(uVar1,DAT_003cd664,DAT_003cd660,uVar3,param_1 + 0x1a4,7,2);
        FUN_0036be34(param_2,0x2080);
        *(ushort *)(param_1 + 0xc3c) = *(ushort *)(param_1 + 0xc3c) & 0xffdf;
      }
    }
    else if (iVar2 == 1) {
      *(undefined4 *)(param_1 + 0xbac) = DAT_003cd63c;
      *(undefined4 *)(param_1 + 0xbb0) = uVar3;
      *(undefined2 *)(param_1 + 0xc10) = 2;
      uVar3 = FUN_0036ae14(param_1 + 0x1a4,5);
      uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00375c08(uVar1,DAT_003cd648,uVar3,DAT_003cd644,param_1 + 0x1a4,5,2);
      *(undefined2 *)(param_1 + 0xc3e) = 0;
      *(undefined4 *)(param_1 + 0xc40) = 5;
      FUN_003685f4(param_1,param_2);
    }
  }
  if ((*(ushort *)(param_1 + 0xc3c) & 0x10) != 0) {
    *(ushort *)(param_1 + 0xc3c) = *(ushort *)(param_1 + 0xc3c) | 1;
  }
  return;
}
