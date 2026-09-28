// OoT3D decomp @ 0033dccc  name=FUN_0033dccc  size=184

void FUN_0033dccc(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;

  if ((*(ushort *)(param_1 + 0x1c) & 0x1f) < 2) {
    *(undefined1 *)(param_1 + 0xc16) = 0;
  }
  else if (((*(ushort *)(param_1 + 0x1c) & 0x1f) == 5) &&
          (iVar3 = func_0x003738d0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                                   *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,param_2,0x10,0,0
                                   ,0,0,1), iVar3 != 0)) {
    *(undefined2 *)(iVar3 + 0x26c) = 0;
  }
  uVar1 = uRam0033dd84;
  *(undefined4 *)(param_1 + 0xc4) = uRam0033dd84;
  *(undefined2 *)(param_1 + 0xbc) = *(undefined2 *)(param_1 + 0x34);
  *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x36);
  uVar2 = uRam0033dd88;
  *(undefined2 *)(param_1 + 0xc0) = *(undefined2 *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  *(undefined2 *)(param_1 + 0xf00) = 0;
  *(undefined2 *)(param_1 + 0xef4) = 0;
  *(undefined4 *)(param_1 + 0xbbc) = uVar2;
  return;
}
