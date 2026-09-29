// OoT3D decomp @ 0045b6f4  name=FUN_0045b6f4  size=440

void FUN_0045b6f4(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  uint *puVar4;
  int iVar5;
  float *pfVar6;
  uint in_fpscr;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;

  uVar1 = DAT_0045b8ac;
  iVar5 = *(int *)(param_1 + 0x1b8);
  local_20 = DAT_0045b8ac;
  local_1c = DAT_0045b8ac;
  local_18 = DAT_0045b8ac;
  local_14 = DAT_0045b8ac;
  *(undefined4 *)(iVar5 + 0xf0) = DAT_0045b8ac;
  *(undefined4 *)(iVar5 + 0xf4) = uVar1;
  *(undefined4 *)(iVar5 + 0xf8) = uVar1;
  *(undefined4 *)(iVar5 + 0xfc) = uVar1;
  *(uint *)(*(int *)(param_1 + 0x1b8) + 0x178) = *(uint *)(*(int *)(param_1 + 0x1b8) + 0x178) | 0x10
  ;
  pfVar6 = (float *)FUN_00333070(param_1);
  fVar3 = DAT_0045b8b4;
  fVar2 = DAT_0045b8b0;
  *pfVar6 = DAT_0045b8b0;
  pfVar6[1] = fVar3;
  pfVar6[2] = fVar2;
  puVar4 = DAT_0045b8bc;
  fVar2 = DAT_0045b8b8;
  pfVar6[3] = DAT_0045b8b8;
  pfVar6[4] = fVar2;
  pfVar6[5] = fVar3;
  pfVar6[6] = fVar2;
  pfVar6[7] = fVar2;
  if (((*puVar4 & 1) == 0) && (iVar5 = FUN_003679b4(puVar4), iVar5 != 0)) {
    FUN_0036788c(DAT_0045b8c0);
  }
  fVar2 = DAT_0045b8cc;
  if (*(char *)(DAT_0045b8c0 + 0x75) == '\0') {
    *pfVar6 = *pfVar6 * DAT_0045b8cc;
    pfVar6[2] = pfVar6[2] * fVar2;
  }
  local_30 = (float)VectorUnsignedToFloat((uint)DAT_0045b8d0[3],(byte)(in_fpscr >> 0x15) & 3);
  local_30 = local_30 * DAT_0045b8d4;
  local_2c = (float)VectorUnsignedToFloat((uint)DAT_0045b8d0[2],(byte)(in_fpscr >> 0x15) & 3);
  local_28 = (float)VectorUnsignedToFloat((uint)DAT_0045b8d0[1],(byte)(in_fpscr >> 0x15) & 3);
  local_24 = (float)VectorUnsignedToFloat((uint)*DAT_0045b8d0,(byte)(in_fpscr >> 0x15) & 3);
  local_2c = local_2c * DAT_0045b8d4;
  local_28 = local_28 * DAT_0045b8d4;
  local_24 = local_24 * DAT_0045b8d4;
  FUN_003429c8(*(undefined4 *)(param_1 + 0x1b8),2,&local_30);
  if (((*puVar4 & 1) == 0) && (iVar5 = FUN_003679b4(DAT_0045b8bc), iVar5 != 0)) {
    FUN_0036788c(DAT_0045b8c0);
  }
  FUN_00328350(DAT_0045b8d8,3,*(undefined4 *)(param_1 + 0x1b8),9);
  return;
}
