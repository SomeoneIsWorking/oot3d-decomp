// OoT3D decomp @ 00196804  name=FUN_00196804  size=316

void FUN_00196804(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;

  FUN_003731e0(param_1 + 0x1a4);
  FUN_0036fc20(DAT_00196944,DAT_00196940,param_1 + 0x6c);
  if (*(short *)(param_1 + 0x724) == 3) {
    local_28 = *(undefined4 *)(param_1 + 0x28);
    local_24 = (*(float *)(param_1 + 0x2c) + DAT_00196948) - DAT_0019694c;
    local_20 = *(undefined4 *)(param_1 + 0x30);
    local_1c = *DAT_00196950;
    uStack_14 = DAT_00196950[2];
    local_18 = DAT_00196954;
    FUN_0035aea0(param_2,&local_28,DAT_00196950,&local_1c,0x28,0);
  }
  if ((*(short *)(param_1 + 0x724) == 0) &&
     (iVar1 = FUN_0036e168(DAT_00196964,DAT_00196960,DAT_0019695c,DAT_00196958,param_1 + 0x58),
     iVar1 <= DAT_00196968)) {
    if (*(short *)(param_1 + 0x1c) < 6) {
      *(undefined2 *)(*(int *)(param_1 + 0x124) + *(short *)(param_1 + 0x1c) * 2 + 0x240) = 0xffff;
    }
    FUN_0037547c(DAT_00196974,param_1 + 0x28,4,DAT_00196970,DAT_00196970,DAT_0019696c);
    FUN_00374428(param_1);
    FUN_00374444(param_2,0,param_1 + 0x28,0x30);
  }
  *(undefined2 *)(param_1 + 0x71c) = 2;
  return;
}
