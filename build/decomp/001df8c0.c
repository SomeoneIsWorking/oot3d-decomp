// OoT3D decomp @ 001df8c0  name=FUN_001df8c0  size=348

void FUN_001df8c0(int param_1)

{
  if (*(short *)(param_1 + 0x1c) == 0) {
    FUN_0036932c(*(undefined4 *)(param_1 + 0x224),1);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x224),2);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x224),3);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x224),4);
    FUN_0037266c(*(undefined4 *)(param_1 + 0x224),4);
    FUN_00357a50(param_1 + 0x1fc,0,4,DAT_001dfa1c,1);
    FUN_00357a50(param_1 + 0x1fc,1,3,DAT_001dfa20,1);
  }
  else {
    FUN_0036932c(*(undefined4 *)(param_1 + 0x224),8);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x224),2);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x224),3);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x224),4);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x224),5);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x224),6);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x224),7);
    FUN_0037266c(*(undefined4 *)(param_1 + 0x224),7);
    FUN_00357a50(param_1 + 0x1fc,0,4,DAT_001dfa24 + *(short *)(param_1 + 0x1c) * 0x10,1);
    FUN_00357a50(param_1 + 0x1fc,1,3,DAT_001dfa24,1);
  }
  FUN_0035e240(param_1 + 0x1fc,param_1 + 0x148,DAT_001dfa2c,DAT_001dfa28,param_1,0);
  return;
}
