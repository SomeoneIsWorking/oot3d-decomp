// OoT3D decomp @ 00230d84  name=FUN_00230d84  size=300

void FUN_00230d84(int param_1,undefined4 param_2,int param_3)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_1c;
  float local_18;
  float local_14;
  
  uVar2 = uRam00230ec0;
  fVar1 = fRam00230eb0;
  local_1c = (float)VectorSignedToFloat(*(undefined4 *)(param_3 + 0x18),(byte)(in_fpscr >> 0x15) & 3
                                       );
  local_18 = (float)VectorSignedToFloat(*(undefined4 *)(param_3 + 0x1c),(byte)(in_fpscr >> 0x15) & 3
                                       );
  local_14 = (float)VectorSignedToFloat(*(undefined4 *)(param_3 + 0x20),(byte)(in_fpscr >> 0x15) & 3
                                       );
  fVar6 = *(float *)(param_1 + 0x28) - local_1c;
  fVar4 = *(float *)(param_1 + 0x2c) - local_18;
  fVar5 = *(float *)(param_1 + 0x30) - local_14;
  if ((int)SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5) < 0x41000001) {
    *(float *)(param_1 + 0x28) = local_1c;
    *(float *)(param_1 + 0x2c) = local_18;
    *(float *)(param_1 + 0x30) = local_14;
    *(undefined4 *)(param_1 + 0x6c) = uVar2;
  }
  else {
    FUN_003326f0(param_1,&local_1c,uRam00230eb4);
    *(undefined4 *)(param_1 + 0x6c) = uRam00230eb8;
    FUN_003731e8(uRam00230ebc,param_1 + 0x1c4);
  }
  iVar3 = FUN_003731e0(param_1 + 0x1c4);
  if (iVar3 != 0) {
    if (*(char *)(iRam00230ec4 + param_1) == '\0') {
      FUN_0037547c(uRam00230ed0,param_1 + 0x28,4,uRam00230ecc,uRam00230ecc,uRam00230ec8);
    }
    FUN_0037422c(*(float *)(param_1 + 0x6c) * fVar1,param_1 + 0x1c4,
                 *(undefined4 *)
                  (*(int *)(iRam00230ed4 + (uint)*(byte *)(param_1 + 0x1b0) * 4) +
                  (uint)*(byte *)(param_1 + 0xe74) * 4));
  }
  return;
}

