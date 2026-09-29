// OoT3D decomp @ 001546ec  name=FUN_001546ec  size=488

void FUN_001546ec(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;

  iVar2 = FUN_00373074(param_2 + 0x3a58,(int)*(char *)(param_1 + 0x1c0));
  uVar3 = DAT_001548d4;
  if (iVar2 != 0) {
    *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)(param_1 + 0x1c0);
    *(undefined4 *)(param_1 + 0x140) = uVar3;
    if (*(short *)(param_1 + 0x1c) != 3) {
      if (*(short *)(param_1 + 0x1c) == 0) {
        FUN_00372f38(param_1,param_2,param_1 + 0x21c,0x1f,0,0);
        uVar3 = FUN_00353fd4(param_1,param_2,8);
        *(undefined4 *)(param_1 + 0x204) = DAT_001548dc;
        *(undefined4 *)(param_1 + 0x208) = DAT_001548e0;
        *(undefined4 *)(param_1 + 0x20c) = DAT_001548e4;
        fVar1 = DAT_001548e8;
        *(float *)(param_1 + 0x210) = *(float *)(param_1 + 0x210) - DAT_001548e8;
        *(float *)(param_1 + 0x218) = *(float *)(param_1 + 0x218) + fVar1;
        *(undefined4 *)(param_1 + 0x100) = DAT_001548ec;
      }
      else if (*(short *)(param_1 + 0x1c) == 1) {
        FUN_00372f38(param_1,param_2,param_1 + 0x21c,0xc,0,0);
        uVar3 = FUN_00353fd4(param_1,param_2,7);
        *(undefined4 *)(param_1 + 0x20c) = DAT_001548f0;
      }
      else {
        FUN_00372f38(param_1,param_2,param_1 + 0x21c,2,0,0);
        uVar3 = FUN_00353fd4(param_1,param_2,1);
        *(undefined4 *)(param_1 + 0x204) = DAT_001548f4;
        *(undefined4 *)(param_1 + 0x208) = DAT_001548f8;
      }
      uVar3 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar3);
      *(undefined4 *)(param_1 + 0x1a4) = uVar3;
      if ((*(short *)(param_1 + 0x1c) != 0) ||
         (iVar2 = FUN_0036e864(param_2,*(undefined1 *)(param_1 + 0x1c1)), uVar3 = DAT_001548fc,
         iVar2 == 0)) {
        uVar3 = DAT_00154900;
      }
      *(undefined4 *)(param_1 + 0x1bc) = uVar3;
      return;
    }
    FUN_00372f38(param_1,param_2,param_1 + 0x21c,0xc,0);
    *(undefined4 *)(param_1 + 0x1bc) = DAT_001548d8;
  }
  return;
}
