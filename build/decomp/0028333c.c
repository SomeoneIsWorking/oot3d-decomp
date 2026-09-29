// OoT3D decomp @ 0028333c  name=FUN_0028333c  size=516

void FUN_0028333c(int param_1,int param_2)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint in_fpscr;
  uint uVar6;
  float fVar7;

  fVar1 = fRam00283544;
  uVar5 = *(undefined4 *)(iRam00283540 + param_2);
  uVar6 = in_fpscr & 0xfffffff | (uint)(fRam00283544 <= *(float *)(param_1 + 0x6c)) << 0x1d;
  if (!SUB41(uVar6 >> 0x1d,0)) {
    fVar7 = (float)VectorSignedToFloat((int)*(short *)(*piRam00283548 + 0x110),
                                       (byte)(uVar6 >> 0x15) & 3);
    *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x6c) + fVar7 * fRam0028354c * fRam00283550;
  }
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x92);
  FUN_00375a18(param_1 + 0x956,0,1,300,0);
  FUN_00375a18(param_1 + 0x958,0,1,300,0);
  iVar4 = FUN_00370734(param_1 + 0x1e0);
  if (iVar4 != 0) {
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
    uVar3 = uRam00283558;
    uVar2 = uRam00283554;
    if (*(char *)(param_1 + 0x9c9) == '\0') {
      if (*(int *)(param_1 + 0x124) == 0) {
        iVar4 = FUN_0035a4fc(uVar5,param_1 + 8);
        if (iVar4 < iRam00283560) {
          uVar5 = FUN_0036ae14(param_1 + 0x1e0,5);
          uVar5 = VectorSignedToFloat(uVar5,(byte)(uVar6 >> 0x15) & 3);
          FUN_00375c08(uRam0028356c,uRam00283568,uVar5,uVar2,param_1 + 0x1e0,5,1);
          *(undefined4 *)(param_1 + 0x6c) = uRam00283570;
          *(undefined1 *)(param_1 + 0x964) = 4;
          uVar5 = uRam00283574;
        }
        else {
          uVar5 = FUN_0036ae14(param_1 + 0x1e0,5);
          uVar5 = VectorSignedToFloat(uVar5,(byte)(uVar6 >> 0x15) & 3);
          FUN_00375c08(uVar3,fVar1,uVar5,uVar2,param_1 + 0x1e0,5,1);
          *(undefined1 *)(param_1 + 0x964) = 2;
          uVar5 = uRam00283564;
        }
        *(undefined4 *)(param_1 + 0x950) = uVar5;
      }
      else {
        uVar5 = FUN_0036ae14(param_1 + 0x1e0,5);
        uVar5 = VectorSignedToFloat(uVar5,(byte)(uVar6 >> 0x15) & 3);
        FUN_00375c08(uVar3,fVar1,uVar5,uVar2,param_1 + 0x1e0,5,1);
        *(undefined1 *)(param_1 + 0x964) = 3;
        *(undefined1 *)(param_1 + 0x94d) = 1;
        *(undefined4 *)(param_1 + 0x950) = uRam0028355c;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x9c9) = 0;
      FUN_00374ab0(param_2,param_1);
    }
    *(undefined1 *)(param_1 + 0x966) = 0xff;
  }
  return;
}
