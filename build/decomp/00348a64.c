// OoT3D decomp @ 00348a64  name=FUN_00348a64  size=288

undefined1 *
FUN_00348a64(int param_1,int param_2,int param_3,undefined2 param_4,undefined2 param_5,
            undefined2 param_6,undefined2 param_7)

{
  undefined4 uVar1;
  undefined1 auStack_58 [56];

  func_0x00313cec(auStack_58);
  uVar1 = func_0x00308474(param_5);
  param_1 = param_1 + param_2 * 0x30;
  *(undefined4 *)(param_1 + 0x13c) = uVar1;
  uVar1 = func_0x003083fc(param_4);
  *(undefined4 *)(param_1 + 0x140) = uVar1;
  uVar1 = func_0x00308390(param_6);
  *(undefined4 *)(param_1 + 0x144) = uVar1;
  uVar1 = func_0x00308390(param_7);
  *(undefined4 *)(param_1 + 0x148) = uVar1;
  func_0x0030835c(param_1 + 0x13c,*(undefined4 *)(param_1 + 0x140),uRam00348b84);
  func_0x00308328(param_1 + 0x13c,*(undefined4 *)(param_1 + 0x140),(int)*(short *)(param_3 + 0x28));
  func_0x0030828c(uRam00348b88,param_1 + 0x13c);
  *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_3 + 0x4c);
  *(undefined2 *)(param_1 + 0x15c) = *(undefined2 *)(param_3 + 0x2c);
  uVar1 = uRam00348b8c;
  *(undefined2 *)(param_1 + 0x15e) = *(undefined2 *)(param_3 + 0x2e);
  uVar1 = func_0x00308200(param_2,uVar1);
  *(undefined4 *)(param_1 + 0x160) = uVar1;
  uVar1 = func_0x0030807c(*(undefined2 *)(param_3 + 0x30),*(undefined2 *)(param_3 + 0x32));
  *(undefined4 *)(param_1 + 0x164) = uVar1;
  return auStack_58;
}
