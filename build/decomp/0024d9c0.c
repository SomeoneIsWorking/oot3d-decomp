// OoT3D decomp @ 0024d9c0  name=FUN_0024d9c0  size=624

void FUN_0024d9c0(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  uint in_fpscr;

  FUN_00370734(param_1 + 0x1e0);
  FUN_00375a18(param_1 + 0x956,0,1,100,0);
  FUN_00375a18(param_1 + 0x958,0,1,100,0);
  uVar3 = DAT_0024dd00;
  bVar6 = false;
  if (*(short *)(param_1 + 0x1c) == 2) {
    in_fpscr = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x21c) == DAT_0024dd04) << 0x1e;
    bVar6 = SUB41(in_fpscr >> 0x1e,0);
  }
  if (bVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  sVar1 = *(short *)(param_1 + 0x954) + -1;
  *(short *)(param_1 + 0x954) = sVar1;
  uVar2 = DAT_0024dd10;
  if (sVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  if (*(int *)(param_1 + 0x124) == 0) {
    if (*(char *)(param_1 + 0x94d) != '\0') {
      if (*(short *)(param_1 + 0x1c) == 2) {
        FUN_00374a58(DAT_0024dd10,param_1 + 0x1e0,2);
        uVar3 = DAT_0024dd1c;
        *(undefined1 *)(param_1 + 0x964) = 5;
      }
      else {
        uVar3 = FUN_0036ae14(param_1 + 0x1e0,4);
        VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
        FUN_00375c08(param_1 + 0x1e0,4,2);
        uVar3 = DAT_0024dd18;
        *(undefined1 *)(param_1 + 0x964) = 7;
      }
      *(undefined4 *)(param_1 + 0x950) = uVar3;
    }
    *(undefined1 *)(param_1 + 0x94d) = 0;
    if ((DAT_0024dd20 < *(int *)(param_1 + 0x98)) || (iVar4 = FUN_0036cd8c(param_2), iVar4 == 0))
    goto LAB_0024dcb8;
    if ((*(short *)(param_1 + 0x1c) == 2) || (*(char *)(param_1 + 0x94d) != '\0'))
    goto LAB_0024dc9c;
    uVar3 = FUN_0036ae14(param_1 + 0x1e0,4);
    VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(param_1 + 0x1e0,4,2);
    uVar3 = DAT_0024dd18;
    *(undefined1 *)(param_1 + 0x964) = 7;
  }
  else {
    if (*(char *)(param_1 + 0x94d) != '\0') goto LAB_0024dcb8;
    if (*(short *)(param_1 + 0x1c) == 2) {
LAB_0024dc9c:
      FUN_00374a58(uVar2,param_1 + 0x1e0,2);
      uVar3 = DAT_0024dd1c;
      *(undefined1 *)(param_1 + 0x964) = 5;
    }
    else {
      uVar2 = FUN_0036ae14(param_1 + 0x1e0,5);
      VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00375c08(uVar3,param_1 + 0x1e0,5,1);
      *(undefined1 *)(param_1 + 0x964) = 3;
      *(undefined1 *)(param_1 + 0x94d) = 1;
      uVar3 = DAT_0024dd14;
    }
  }
  *(undefined4 *)(param_1 + 0x950) = uVar3;
LAB_0024dcb8:
  uVar5 = *(uint *)(DAT_0024dd24 + param_2);
  if (((uVar5 & 0x5f) == 0) && (uVar5 != *(uint *)(DAT_0024dd28 + 0x14))) {
    *(uint *)(DAT_0024dd28 + 0x14) = uVar5;
    FUN_00375bcc(param_1,DAT_0024dd2c);
    return;
  }
  return;
}
