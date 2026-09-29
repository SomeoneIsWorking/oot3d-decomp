// OoT3D decomp @ 001c2f68  name=FUN_001c2f68  size=248

void FUN_001c2f68(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  undefined1 auStack_14 [4];
  undefined1 auStack_10 [4];

  fVar3 = DAT_001c3064;
  fVar2 = *(float *)(param_1 + 0x2c) - DAT_001c3060;
  *(float *)(param_1 + 0x2c) = fVar2;
  if ((uint)fVar3 < (uint)fVar2) {
    *(undefined4 *)(param_1 + 0x2c) = DAT_001c3068;
  }
  local_1c = *(float *)(param_1 + 0xc) + *(float *)(param_1 + 0x2c);
  *(float *)(param_1 + 0xc) = local_1c;
  *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) & 0xfc;
  local_20 = *(undefined4 *)(param_1 + 8);
  local_18 = *(undefined4 *)(param_1 + 0x10);
  iVar1 = FUN_003409d4(DAT_001c3070,DAT_001c306c,param_3 + 0xa98,&local_20,param_1 + 8,
                       param_1 + 0x1c,param_1 + 0x38);
  if (iVar1 != 0) {
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 2;
  }
  fVar3 = (float)FUN_00358410(param_3 + 0xa98,auStack_10,auStack_14,&local_20);
  *(float *)(param_1 + 4) = fVar3;
  fVar2 = fVar3 - *(float *)(param_1 + 0xc);
  if ((DAT_001c3074 <= fVar2) && ((int)fVar2 < DAT_001c3078)) {
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 1;
    *(float *)(param_1 + 0xc) = fVar3;
  }
  return;
}
