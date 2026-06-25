// OoT3D decomp @ 004bde38  name=FUN_004bde38  size=104

void FUN_004bde38(int param_1,undefined4 param_2)

{
  float fVar1;
  uint in_fpscr;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  
  if (*(char *)(param_1 + 0x88) == '\0') {
    fVar2 = (float)FUN_0030b44c(param_1 + 100);
    fVar1 = DAT_004bdea0;
    fVar2 = DAT_004bdea0 - fVar2;
    fVar4 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
    uVar3 = FUN_0030b44c((undefined4 *)(param_1 + 100));
    *(undefined4 *)(param_1 + 100) = uVar3;
    *(float *)(param_1 + 0x68) = fVar1;
    *(int *)(param_1 + 0x6c) = (int)(fVar2 * fVar4);
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  return;
}

