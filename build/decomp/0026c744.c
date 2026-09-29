// OoT3D decomp @ 0026c744  name=FUN_0026c744  size=740

void FUN_0026c744(int param_1,undefined4 param_2)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;

  if ((*(int *)(param_1 + 0x8f4) == DAT_0026ca28) && (2 < *(short *)(DAT_0026ca2c + param_1))) {
    FUN_0037266c(*(undefined4 *)(param_1 + 0x1cc),2);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),7);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),0);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),3);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),1);
    uVar2 = *(undefined4 *)(param_1 + 0x1cc);
    uVar3 = 4;
  }
  else {
    if (*(short *)(param_1 + 0x1c) == 1) {
      FUN_0037266c();
      FUN_0037266c(*(undefined4 *)(param_1 + 0x1cc),0);
      FUN_0037266c(*(undefined4 *)(param_1 + 0x1cc),3);
      FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),1);
      FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),4);
    }
    else {
      FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),7);
      FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),0);
      FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),3);
      FUN_0037266c(*(undefined4 *)(param_1 + 0x1cc),1);
      FUN_0037266c(*(undefined4 *)(param_1 + 0x1cc),4);
    }
    uVar2 = *(undefined4 *)(param_1 + 0x1cc);
    uVar3 = 2;
  }
  FUN_0036932c(uVar2,uVar3);
  fVar1 = DAT_0026ca34;
  if (*(int *)(param_1 + 0x8f4) != DAT_0026ca30) {
    fVar4 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_1 + 0x900),(byte)(in_fpscr >> 0x15) & 3);
    fVar5 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_1 + 0x901),(byte)(in_fpscr >> 0x15) & 3);
    fVar6 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_1 + 0x902),(byte)(in_fpscr >> 0x15) & 3);
    local_18 = (float)VectorUnsignedToFloat
                                ((uint)*(byte *)(param_1 + 0x903),(byte)(in_fpscr >> 0x15) & 3);
    local_18 = local_18 * DAT_0026ca34;
    local_24 = fVar4 * DAT_0026ca34 * local_18;
    local_20 = fVar5 * DAT_0026ca34 * local_18;
    local_1c = fVar6 * DAT_0026ca34 * local_18;
    FUN_00357388(param_1,&local_24,4,0);
    local_34 = (float)VectorUnsignedToFloat
                                ((uint)*(byte *)(param_1 + 0x904),(byte)(in_fpscr >> 0x15) & 3);
    local_34 = local_34 * fVar1;
    local_30 = (float)VectorUnsignedToFloat
                                ((uint)*(byte *)(param_1 + 0x905),(byte)(in_fpscr >> 0x15) & 3);
    local_30 = local_30 * fVar1;
    local_2c = (float)VectorUnsignedToFloat
                                ((uint)*(byte *)(param_1 + 0x906),(byte)(in_fpscr >> 0x15) & 3);
    local_2c = local_2c * fVar1;
    local_28 = (float)VectorUnsignedToFloat
                                ((uint)*(byte *)(param_1 + 0x907),(byte)(in_fpscr >> 0x15) & 3);
    local_28 = local_28 * fVar1;
    FUN_00357a50(param_1 + 0x1a4,5,3,&local_24,1);
    FUN_00357a50(param_1 + 0x1a4,7,3,&local_24,1);
    FUN_00357a50(param_1 + 0x1a4,2,3,&local_34,1);
    FUN_00357a50(param_1 + 0x1a4,3,3,&local_34,1);
    if (*(char *)(param_1 + 0x903) == -1 || *(char *)(param_1 + 0x903) == '\0') {
      FUN_0035e240(param_1 + 0x1a4,param_1 + 0x148,DAT_0026ca3c,DAT_0026ca38,param_1,0);
    }
    else {
      FUN_0035e240(param_1 + 0x1a4,param_1 + 0x148,DAT_0026ca3c,DAT_0026ca38,param_1,0);
      *(undefined1 *)(*(int *)(param_1 + 0x8a8) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(param_1 + 0x8a8),param_1 + 0x8b4);
      FUN_00372170(*(undefined4 *)(param_1 + 0x8a8),0);
    }
  }
  FUN_0032c8e0(param_1,param_2);
  return;
}
