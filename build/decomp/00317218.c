// OoT3D decomp @ 00317218  name=FUN_00317218  size=132

void FUN_00317218(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_80 [72];

  iVar1 = *(int *)(DAT_003175d4 + param_2);
  FUN_00372224(auStack_80,param_1 + 0x148);
  fVar4 = *(float *)(iVar1 + 0x28) - *(float *)(param_1 + 0x28);
  fVar3 = *(float *)(iVar1 + 0x30) - *(float *)(param_1 + 0x30);
  fVar2 = (*(float *)(iVar1 + 0x2c) - *(float *)(param_1 + 0x2c)) -
          *(float *)(param_1 + 0x58) * DAT_003175d8;
                    /* WARNING: Subroutine does not return */
  FUN_003759d0(fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3);
}
