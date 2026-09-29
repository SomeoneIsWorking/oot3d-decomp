// OoT3D decomp @ 00341c28  name=FUN_00341c28  size=296

int FUN_00341c28(float param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 local_14;

  iVar2 = *(int *)(DAT_00341d50 + param_3);
  local_14 = param_4;
  iVar1 = FUN_0037571c(param_3);
  if (iVar1 == 0 && *DAT_00341d54 == 0) {
    fVar5 = *(float *)(iVar2 + 0x28) - *(float *)(param_2 + 0x28);
    fVar3 = *(float *)(iVar2 + 0x2c) - *(float *)(param_2 + 0x2c);
    fVar4 = *(float *)(iVar2 + 0x30) - *(float *)(param_2 + 0x30);
    fVar3 = SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar4 * fVar4);
  }
  else {
    fVar5 = *(float *)(param_3 + 0x1b8) - *(float *)(param_2 + 0x28);
    fVar3 = *(float *)(param_3 + 0x1bc) - *(float *)(param_2 + 0x2c);
    fVar4 = *(float *)(param_3 + 0x1c0) - *(float *)(param_2 + 0x30);
    fVar3 = SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar4 * fVar4) * DAT_00341d58;
  }
  if (fVar3 <= param_1) {
    *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) | 1;
    FUN_00375a18(&local_14,0xff,6,0x14,1);
  }
  else {
    *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) & 0xfffffffe;
    FUN_00375a18(&local_14,0,6,0x14,1);
  }
  return (int)(short)local_14;
}
