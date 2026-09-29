// OoT3D decomp @ 003cd284  name=FUN_003cd284  size=496

void FUN_003cd284(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint in_fpscr;

  iVar2 = FUN_003769d8(param_2 + 0x28a0);
  if ((iVar2 != 4) || (iVar2 = FUN_00346964(param_2), iVar2 == 0)) goto LAB_003cd348;
  iVar2 = FUN_00369f3c(param_2);
  uVar3 = DAT_003cd480;
  uVar1 = DAT_003cd478;
  if (iVar2 == 0) {
    if (0x1d < *(short *)(DAT_003cd474 + 0x48)) {
      iVar2 = FUN_00377a04();
      uVar1 = DAT_003cd490;
      if (iVar2 == 0) {
        FUN_0036be34(param_2,DAT_003cd494);
        uVar1 = DAT_003cd490;
        *(undefined4 *)(param_1 + 0xbac) = DAT_003cd498;
        *(undefined4 *)(param_1 + 0xbb0) = uVar1;
      }
      else {
        *(ushort *)(param_1 + 0xc3c) = *(ushort *)(param_1 + 0xc3c) | 2;
        *(undefined4 *)(param_1 + 0xbac) = DAT_003cd49c;
        *(undefined4 *)(param_1 + 0xbb0) = uVar1;
        FUN_00376a60(0xffffffe2);
        FUN_003724dc(DAT_003cd4a4,DAT_003cd4a0,param_1,param_2,0x50);
      }
      goto LAB_003cd348;
    }
  }
  else {
    if (iVar2 != 1) {
      if (iVar2 == 2) {
        *(undefined4 *)(param_1 + 0xbac) = DAT_003cd47c;
        *(undefined4 *)(param_1 + 0xbb0) = uVar3;
        *(undefined2 *)(param_1 + 0xc10) = 2;
        uVar3 = FUN_0036ae14(param_1 + 0x1a4,5);
        uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
        FUN_00375c08(uVar1,DAT_003cd488,uVar3,DAT_003cd484,param_1 + 0x1a4,5,2);
        *(undefined2 *)(param_1 + 0xc3e) = 0;
        *(undefined4 *)(param_1 + 0xc40) = 5;
        FUN_003685f4(param_1,param_2);
      }
      goto LAB_003cd348;
    }
    if (9 < *(short *)(DAT_003cd474 + 0x48)) {
      FUN_00376a60(0xfffffff6);
      uVar3 = DAT_003cd490;
      *(undefined4 *)(param_1 + 0xbac) = DAT_003cd4a8;
      *(undefined4 *)(param_1 + 0xbb0) = uVar3;
      uVar3 = DAT_003cd4ac;
      *(ushort *)(param_1 + 0xc3c) = *(ushort *)(param_1 + 0xc3c) & 0xffef;
      FUN_00375c08(uVar1,DAT_003cd4b4,DAT_003cd4b0,uVar3,param_1 + 0x1a4,7,2);
      FUN_0036be34(param_2,0x2080);
      *(ushort *)(param_1 + 0xc3c) = *(ushort *)(param_1 + 0xc3c) & 0xffdf;
      goto LAB_003cd348;
    }
  }
  FUN_0036be34(param_2,0x85);
  uVar1 = DAT_003cd490;
  *(undefined4 *)(param_1 + 0xbac) = DAT_003cd48c;
  *(undefined4 *)(param_1 + 0xbb0) = uVar1;
LAB_003cd348:
  if ((*(ushort *)(param_1 + 0xc3c) & 0x10) != 0) {
    *(ushort *)(param_1 + 0xc3c) = *(ushort *)(param_1 + 0xc3c) | 1;
  }
  return;
}
