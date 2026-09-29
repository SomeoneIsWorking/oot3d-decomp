// OoT3D decomp @ 00214938  name=FUN_00214938  size=684

void FUN_00214938(int param_1)

{
  float fVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  float local_48;
  float local_44;
  float local_40;
  undefined4 local_3c;
  float local_38;
  float local_34;
  float local_30;
  undefined4 local_2c;
  float local_28;
  float local_24;
  float local_20;
  undefined4 local_1c;

  if ((*(byte *)(param_1 + 0x26b) & 2) != 0) {
    FUN_003721e0(*(undefined4 *)(param_1 + 0x218),param_1 + 0x148);
    *(undefined1 *)(*(int *)(param_1 + 0x218) + 0xac) = 1;
    FUN_00372170(*(undefined4 *)(param_1 + 0x218),0);
  }
  if ((*(byte *)(param_1 + 0x26b) & 4) != 0) {
    FUN_003721e0(*(undefined4 *)(param_1 + 0x21c),param_1 + 0x148);
    *(undefined1 *)(*(int *)(param_1 + 0x21c) + 0xac) = 1;
    FUN_00372170(*(undefined4 *)(param_1 + 0x21c),0);
  }
  fVar1 = DAT_00214be8;
  fVar3 = DAT_00214be4;
  if ((*(byte *)(param_1 + 0x26b) & 1) != 0) {
    local_3c = *(undefined4 *)(param_1 + 8);
    local_2c = *(undefined4 *)(param_1 + 0xc);
    local_1c = *(undefined4 *)(param_1 + 0x10);
    local_40 = 0.0;
    local_44 = 0.0;
    local_48 = 1.0;
    local_38 = 0.0;
    local_34 = 1.0;
    local_30 = 0.0;
    local_28 = 0.0;
    local_24 = 0.0;
    local_20 = 1.0;
    fVar2 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x16),(byte)(in_fpscr >> 0x15) & 3)
    ;
    FUN_003735e8(fVar2 * DAT_00214be4,&local_48,1);
    local_48 = local_48 * fVar1;
    local_38 = local_38 * fVar1;
    local_28 = local_28 * fVar1;
    local_44 = local_44 * fVar1;
    local_34 = local_34 * fVar1;
    local_24 = local_24 * fVar1;
    local_40 = local_40 * fVar1;
    local_30 = local_30 * fVar1;
    local_20 = local_20 * fVar1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x220),&local_48);
    *(undefined1 *)(*(int *)(param_1 + 0x220) + 0xac) = 1;
    FUN_00372170(*(undefined4 *)(param_1 + 0x220),0);
  }
  if ((*(byte *)(param_1 + 0x26b) & 8) != 0) {
    local_3c = *(undefined4 *)(param_1 + 0x28);
    local_2c = *(undefined4 *)(param_1 + 0x2c);
    local_1c = *(undefined4 *)(param_1 + 0x30);
    local_40 = 0.0;
    local_44 = 0.0;
    local_48 = 1.0;
    local_38 = 0.0;
    local_34 = 1.0;
    local_30 = 0.0;
    local_28 = 0.0;
    local_24 = 0.0;
    local_20 = 1.0;
    fVar2 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xbe),(byte)(in_fpscr >> 0x15) & 3)
    ;
    FUN_003735e8(fVar2 * fVar3,&local_48,1);
    fVar3 = *(float *)(param_1 + 0x248);
    local_48 = local_48 * fVar1;
    local_38 = local_38 * fVar1;
    local_28 = local_28 * fVar1;
    local_44 = local_44 * fVar3;
    local_34 = local_34 * fVar3;
    local_24 = local_24 * fVar3;
    local_40 = local_40 * fVar1;
    local_30 = local_30 * fVar1;
    local_20 = local_20 * fVar1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x224),&local_48);
    *(undefined1 *)(*(int *)(param_1 + 0x224) + 0xac) = 1;
    FUN_00372170(*(undefined4 *)(param_1 + 0x224),0);
  }
  return;
}
