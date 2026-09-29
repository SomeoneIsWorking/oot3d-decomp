// OoT3D decomp @ 0026d700  name=FUN_0026d700  size=380

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0026d700(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;

  fVar3 = DAT_0026d884;
  uVar2 = DAT_0026d880;
  uVar1 = DAT_0026d87c;
  if (*(short *)(param_1 + 0xbc) == -0x4000) {
    if (*(float *)(param_1 + 0x2c) == *(float *)(param_1 + 0xc)) {
      FUN_00375bcc(param_1,DAT_0026d88c);
    }
    fVar4 = (float)FUN_0036e168(*(float *)(param_1 + 0xc) + DAT_0026d890,uVar2,uVar1,uVar2,
                                param_1 + 0x2c);
    uVar1 = DAT_0026d894;
    if (fVar4 == fVar3) {
      if (*(short *)(param_1 + 0x954) != 0) {
        *(short *)(param_1 + 0x954) = *(short *)(param_1 + 0x954) + -1;
        FUN_0036e168(DAT_0026d898,uVar2,uVar1,uVar2,param_1 + 0x6c);
        return;
      }
      fVar4 = (float)FUN_0036e168(fVar3,uVar2,DAT_0026d894,uVar2,param_1 + 0x6c);
      if (fVar4 == fVar3) {
        FUN_00375a18(param_1 + 0xbc,0,1,2000,0);
      }
    }
  }
  else {
    FUN_00375a18(param_1 + 0xbc,0,1,2000,0);
    fVar4 = (float)FUN_0036e168(*(undefined4 *)(param_1 + 0xc),uVar2,uVar1,uVar2,param_1 + 0x2c);
    if (fVar4 == fVar3) {
      *(undefined4 *)(param_1 + 0x70) = DAT_0026d888;
      if (*(char *)(param_1 + 0x9c9) != '\0') {
        *(undefined1 *)(param_1 + 0x9c9) = 0;
        FUN_00374ab0(param_2,param_1);
        return;
      }
      if (*(short *)(param_1 + 0x1c) == 2) {
        FUN_0036e734(param_1 + 0x1e0,0);
      }
      else {
        FUN_00370350(DAT_0034f380,param_1 + 0x1e0,3);
      }
      *(undefined1 *)(param_1 + 0x964) = 0;
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
  }
  return;
}
