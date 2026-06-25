// OoT3D decomp @ 0034b288  name=FUN_0034b288  size=164

void FUN_0034b288(float param_1,undefined4 param_2,int param_3,int param_4)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = DAT_0034b32c;
  uVar2 = *(uint *)(param_3 + 0x29b8);
  fVar4 = DAT_0034b338;
  if (param_4 == 0) {
    if ((uVar2 & 0x200000) == 0) goto LAB_0034b304;
  }
  else if ((uVar2 & 0x200000) == 0) {
    if (((*DAT_0034b330 | *DAT_0034b334) & *(uint *)(*(int *)(param_3 + 0x29c8) + 4)) != 0) {
      *(uint *)(param_3 + 0x29b8) = uVar2 | 0x200000;
      fVar4 = fVar1;
    }
    goto LAB_0034b304;
  }
  *(uint *)(param_3 + 0x29b8) = uVar2 & 0xffdfffff;
  fVar4 = fVar1;
LAB_0034b304:
  fVar3 = fVar4 * param_1;
  if ((int)(fVar4 * param_1) < 0x3f800000) {
    fVar3 = fVar1;
  }
  *(float *)(param_3 + 0x294) = fVar3;
  FUN_0036b4ec(param_3 + 0x254,param_2);
  return;
}

