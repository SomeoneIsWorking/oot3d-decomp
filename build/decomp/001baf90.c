// OoT3D decomp @ 001baf90  name=FUN_001baf90  size=348

void FUN_001baf90(int param_1,int param_2)

{
  float fVar1;
  undefined4 local_24;
  float local_20;
  float local_1c;
  undefined4 local_18;

  fVar1 = DAT_001bb0ec;
  if (*(float *)(param_1 + 0x54) != DAT_001bb0ec) {
    FUN_00357fd0(*(undefined4 *)(DAT_001bb0f0 + param_2),*(undefined4 *)(param_1 + 0x178),
                 param_1 + 0x28);
    if ((*(ushort *)(param_1 + 0x1c) & 0xe000) == 0) {
      if (*(int *)(param_1 + 0x6a0) == DAT_001bb0f4) {
        local_24 = *DAT_001bb100;
        local_20 = (float)DAT_001bb100[1];
        local_1c = (float)DAT_001bb100[2];
        local_18 = DAT_001bb100[3];
        FUN_00357388(param_1,&local_24,5,0);
      }
      else if (*(short *)(DAT_001bb104 + param_1) == 0) {
        FUN_00341c18(*(undefined4 *)(param_1 + 0x178),5);
      }
    }
    else {
      FUN_00369014(DAT_001bb0f8,param_1 + 0x148,1);
      if (*(char *)(param_1 + 0xb7) != '\0') {
        local_20 = fVar1;
        local_1c = fVar1;
        local_18 = DAT_001bb0fc;
        FUN_00372070(param_1 + 0x148,param_1 + 0x148,&local_20);
      }
    }
    FUN_00342be0(fVar1,fVar1,fVar1,*(undefined4 *)(param_1 + 0x824),param_1,4,2);
    *(undefined4 *)(param_1 + 0x780) = *(undefined4 *)(param_1 + 0x148);
    *(undefined4 *)(param_1 + 0x784) = *(undefined4 *)(param_1 + 0x14c);
    *(undefined4 *)(param_1 + 0x788) = *(undefined4 *)(param_1 + 0x150);
    *(undefined4 *)(param_1 + 0x78c) = *(undefined4 *)(param_1 + 0x154);
    *(undefined4 *)(param_1 + 0x790) = *(undefined4 *)(param_1 + 0x158);
    *(undefined4 *)(param_1 + 0x794) = *(undefined4 *)(param_1 + 0x15c);
    *(undefined4 *)(param_1 + 0x798) = *(undefined4 *)(param_1 + 0x160);
    *(undefined4 *)(param_1 + 0x79c) = *(undefined4 *)(param_1 + 0x164);
    *(undefined4 *)(param_1 + 0x7a0) = *(undefined4 *)(param_1 + 0x168);
    *(undefined4 *)(param_1 + 0x7a4) = *(undefined4 *)(param_1 + 0x16c);
    *(undefined4 *)(param_1 + 0x7a8) = *(undefined4 *)(param_1 + 0x170);
    *(undefined4 *)(param_1 + 0x7ac) = *(undefined4 *)(param_1 + 0x174);
    local_24 = 0;
    FUN_0035e240(param_1 + 0x1a4,param_1 + 0x148,DAT_001bb10c,DAT_001bb108,param_1);
  }
  return;
}
