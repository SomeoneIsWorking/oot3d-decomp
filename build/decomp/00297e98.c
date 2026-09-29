// OoT3D decomp @ 00297e98  name=FUN_00297e98  size=976

void FUN_00297e98(int param_1)

{
  float fVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  float local_44;
  float local_40;
  float local_3c;
  undefined4 uStack_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  float local_18;

  FUN_0033d000();
  if ((*(int *)(param_1 + 0x918) == DAT_00298268) && (2 < *(short *)(param_1 + 0x920))) {
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),0);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),1);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),3);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),4);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),5);
    FUN_0037266c(*(undefined4 *)(param_1 + 0x1cc),2);
  }
  else {
    if (*(short *)(param_1 + 0x1c) == 2) {
      FUN_0037266c();
      FUN_0037266c(*(undefined4 *)(param_1 + 0x1cc),3);
      FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),1);
      FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),4);
    }
    else {
      FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),0);
      FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),3);
      FUN_0037266c(*(undefined4 *)(param_1 + 0x1cc),1);
      FUN_0037266c(*(undefined4 *)(param_1 + 0x1cc),4);
    }
    FUN_0037266c(*(undefined4 *)(param_1 + 0x1cc),5);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),2);
  }
  fVar1 = DAT_00298270;
  local_24 = *DAT_0029826c;
  uStack_20 = DAT_0029826c[1];
  uStack_1c = DAT_0029826c[2];
  local_18 = (float)VectorUnsignedToFloat
                              ((uint)*(byte *)(param_1 + 0x929),(byte)(in_fpscr >> 0x15) & 3);
  local_18 = local_18 * DAT_00298270;
  local_34 = (float)VectorUnsignedToFloat
                              ((uint)*(byte *)(param_1 + 0x926),(byte)(in_fpscr >> 0x15) & 3);
  local_34 = local_34 * DAT_00298270;
  local_30 = (float)VectorUnsignedToFloat
                              ((uint)*(byte *)(param_1 + 0x927),(byte)(in_fpscr >> 0x15) & 3);
  local_30 = local_30 * DAT_00298270;
  local_2c = (float)VectorUnsignedToFloat
                              ((uint)*(byte *)(param_1 + 0x928),(byte)(in_fpscr >> 0x15) & 3);
  local_2c = local_2c * DAT_00298270;
  local_28 = (float)VectorUnsignedToFloat
                              ((uint)*(byte *)(param_1 + 0x929),(byte)(in_fpscr >> 0x15) & 3);
  local_28 = local_28 * DAT_00298270;
  FUN_00357388(param_1,&local_24,4,0);
  FUN_00357a50(param_1 + 0x1a4,2,3,&local_34,1);
  FUN_00357a50(param_1 + 0x1a4,5,3,&local_34,1);
  FUN_00357a50(param_1 + 0x1a4,2,4,&local_24,2);
  FUN_00357a50(param_1 + 0x1a4,5,4,&local_24,2);
  FUN_00357a50(param_1 + 0x1a4,0,4,&local_24,0);
  FUN_00357a50(param_1 + 0x1a4,1,4,&local_24,0);
  FUN_00357a50(param_1 + 0x1a4,3,4,&local_24,0);
  FUN_00357a50(param_1 + 0x1a4,4,4,&local_24,0);
  FUN_00357a50(param_1 + 0x1a4,6,4,&local_24,0);
  FUN_00357a50(param_1 + 0x1a4,7,4,&local_24,0);
  FUN_00357a50(param_1 + 0x1a4,8,4,&local_24,0);
  if (*(char *)(param_1 + 0x929) == '\0') {
    *(undefined1 *)(*(int *)(param_1 + 0x1cc) + 0xad) = 0;
  }
  else {
    *(undefined1 *)(*(int *)(param_1 + 0x1cc) + 0xad) = 1;
  }
  FUN_0035e240(param_1 + 0x1a4,param_1 + 0x148,0,DAT_00298274,param_1,0);
  fVar2 = (float)VectorUnsignedToFloat
                           ((uint)*(byte *)(param_1 + 0x92d),(byte)(in_fpscr >> 0x15) & 3);
  fVar3 = fVar2 * fVar1;
  if ((int)(fVar2 * fVar1) < DAT_00298278) {
    fVar3 = DAT_0029827c;
  }
  uStack_38 = *(undefined4 *)(DAT_00298280 + 0xc);
  fVar2 = (float)VectorUnsignedToFloat
                           ((uint)*(byte *)(param_1 + 0x92a),(byte)(in_fpscr >> 0x15) & 3);
  local_44 = fVar2 * fVar3 * fVar1;
  fVar2 = (float)VectorUnsignedToFloat
                           ((uint)*(byte *)(param_1 + 0x92b),(byte)(in_fpscr >> 0x15) & 3);
  local_40 = fVar2 * fVar3 * fVar1;
  fVar2 = (float)VectorUnsignedToFloat
                           ((uint)*(byte *)(param_1 + 0x92c),(byte)(in_fpscr >> 0x15) & 3);
  local_3c = fVar2 * fVar3 * fVar1;
  FUN_00358778(*(undefined4 *)(param_1 + 0x94c),2,2,&local_44,0);
  *(undefined1 *)(*(int *)(param_1 + 0x94c) + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)(param_1 + 0x94c),param_1 + 0xa3c);
  FUN_00372170(*(undefined4 *)(param_1 + 0x94c),0);
  return;
}
