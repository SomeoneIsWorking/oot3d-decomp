// OoT3D decomp @ 00328d50  name=FUN_00328d50  size=112

void FUN_00328d50(int param_1)

{
  undefined4 uVar1;

  FUN_00375c08(DAT_00328dc8,DAT_00328dc0,DAT_00328dc4,DAT_00328dc0,param_1 + 0x1a4,2);
  *(undefined4 *)(param_1 + 100) = DAT_00328dcc;
  *(undefined4 *)(param_1 + 0xa5c) = 0;
  uVar1 = DAT_00328dd0;
  *(undefined4 *)(param_1 + 0xa50) = 1;
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  *(undefined4 *)(param_1 + 0xa48) = 0x16;
  FUN_00375bcc(param_1,DAT_00328dd4);
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
  *(undefined4 *)(param_1 + 0xa54) = DAT_00328dd8;
  return;
}
