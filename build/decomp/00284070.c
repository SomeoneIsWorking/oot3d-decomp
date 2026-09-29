// OoT3D decomp @ 00284070  name=FUN_00284070  size=108

undefined4 FUN_00284070(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined2 *puVar1;
  undefined2 uStack_c;
  short local_a;
  undefined4 uStack_8;

  if (param_2 == 7) {
    if (*(short *)(param_4 + 0x580) == 4) {
      uStack_8 = *(undefined4 *)(param_4 + 0x570);
      local_a = (short)((uint)*(undefined4 *)(param_4 + 0x56c) >> 0x10);
      _uStack_c = CONCAT22(-local_a,(short)*(undefined4 *)(param_4 + 0x56c));
      puVar1 = &uStack_c;
    }
    else {
      puVar1 = (undefined2 *)(param_4 + 0x56c);
    }
    FUN_0034e01c(param_3,puVar1);
  }
  else if (param_2 == 0) {
    FUN_0034e01c(param_3,param_4 + 0x572);
  }
  return 0;
}
