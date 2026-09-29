// OoT3D decomp @ 003b7cb4  name=FUN_003b7cb4  size=184

void FUN_003b7cb4(int param_1,undefined4 param_2)

{
  short sVar1;
  float fVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fVar6;

  FUN_00375a18(param_1 + 0xbc,0x4000,4,1000);
  fVar5 = DAT_003b7d74;
  fVar2 = DAT_003b7d70;
  fVar4 = DAT_003b7d6c;
  if (*(short *)(param_1 + 0x516) != 0) {
    sVar1 = *(short *)(param_1 + 0x516) + -1;
    iVar3 = (int)sVar1;
    *(short *)(param_1 + 0x516) = sVar1;
    if (iVar3 != 0) {
      fVar6 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
      if (iVar3 < 1) {
        fVar5 = fVar6 * fVar4 * fVar2 - fVar5;
      }
      else {
        fVar5 = fVar5 + fVar6 * fVar4 * fVar2;
      }
      fVar4 = (float)VectorSignedToFloat(0x1e - (int)fVar5,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc) - fVar4 * DAT_003b7d78 * DAT_003b7d7c;
      goto LAB_003b7d58;
    }
  }
  FUN_00374428(param_1);
LAB_003b7d58:
  FUN_003179d0(param_1,param_2,3,100);
  return;
}
