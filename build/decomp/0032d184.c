// OoT3D decomp @ 0032d184  name=FUN_0032d184  size=228

void FUN_0032d184(undefined4 param_1,int param_2,byte *param_3,short param_4,undefined4 param_5)

{
  float fVar1;
  short sVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;

  fVar1 = DAT_0032d26c;
  local_2c = *DAT_0032d268;
  local_28 = DAT_0032d268[1];
  local_24 = DAT_0032d268[2];
  local_20 = DAT_0032d268[3];
  sVar2 = FUN_00368d94(0x8000,param_5);
  fVar4 = (float)FUN_00338f68(sVar2 * param_4);
  local_20 = DAT_0032d270 - (DAT_0032d270 - fVar4) * fVar1;
  local_2c = (float)VectorUnsignedToFloat((uint)*param_3,(byte)(in_fpscr >> 0x15) & 3);
  local_2c = local_2c * DAT_0032d274;
  local_28 = (float)VectorUnsignedToFloat((uint)param_3[1],(byte)(in_fpscr >> 0x15) & 3);
  local_28 = local_28 * DAT_0032d274;
  local_24 = (float)VectorUnsignedToFloat((uint)param_3[2],(byte)(in_fpscr >> 0x15) & 3);
  local_24 = local_24 * DAT_0032d274;
  iVar3 = *(int *)(param_2 + 0x178);
  *(undefined1 *)(iVar3 + 0x1b7) = *(undefined1 *)(iVar3 + 0x1b6);
  *(undefined1 *)(iVar3 + 0x1b6) = 0;
  FUN_00358964(*(undefined4 *)(param_2 + 0x178),5,&local_2c);
  FUN_003589cc(*(undefined4 *)(param_2 + 0x178),5);
  *(undefined1 *)(*(int *)(param_2 + 0x178) + 0x1b6) =
       *(undefined1 *)(*(int *)(param_2 + 0x178) + 0x1b7);
  return;
}
