// OoT3D decomp @ 001ff5c4  name=FUN_001ff5c4  size=224

void FUN_001ff5c4(undefined4 param_1,int param_2,byte *param_3,int param_4,int param_5)

{
  undefined2 uVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  if (param_5 != 0) {
    local_24 = *DAT_001ff6a4;
    local_20 = DAT_001ff6a4[1];
    local_1c = DAT_001ff6a4[2];
    local_18 = DAT_001ff6a4[3];
    uVar1 = FUN_00368d94(param_4 << 0xe,param_5);
    fVar3 = (float)FUN_00338f68(uVar1);
    local_18 = DAT_001ff6a8 - (DAT_001ff6a8 - fVar3) * DAT_001ff6ac;
    local_24 = (float)VectorUnsignedToFloat((uint)*param_3,(byte)(in_fpscr >> 0x15) & 3);
    local_24 = local_24 * DAT_001ff6b0;
    local_20 = (float)VectorUnsignedToFloat((uint)param_3[1],(byte)(in_fpscr >> 0x15) & 3);
    local_20 = local_20 * DAT_001ff6b0;
    local_1c = (float)VectorUnsignedToFloat((uint)param_3[2],(byte)(in_fpscr >> 0x15) & 3);
    local_1c = local_1c * DAT_001ff6b0;
    iVar2 = *(int *)(param_2 + 0x178);
    *(undefined1 *)(iVar2 + 0x1b7) = *(undefined1 *)(iVar2 + 0x1b6);
    *(undefined1 *)(iVar2 + 0x1b6) = 0;
    FUN_00358964(*(undefined4 *)(param_2 + 0x178),5,&local_24);
    FUN_003589cc(*(undefined4 *)(param_2 + 0x178),5);
    *(undefined1 *)(*(int *)(param_2 + 0x178) + 0x1b6) =
         *(undefined1 *)(*(int *)(param_2 + 0x178) + 0x1b7);
  }
  return;
}

