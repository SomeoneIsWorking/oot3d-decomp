// OoT3D decomp @ 002aa864  name=FUN_002aa864  size=264

void FUN_002aa864(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  int iVar3;

  FUN_0036f4e4(uRam002aa96c,param_1 + 0x1a8);
  *(undefined2 *)(param_1 + 0x246) = 0;
  *(undefined2 *)(param_1 + 0x242) = 0;
  *(undefined2 *)(param_1 + 0x23c) = 0;
  FUN_0036fc20(uRam002aa974,uRam002aa970,param_1 + 0x1e4);
  uVar1 = uRam002aa978;
  FUN_00375a18(param_1 + 0xbc,(int)*(short *)(param_1 + 0x248),5,uRam002aa978,0);
  FUN_00375a18(param_1 + 0xbe,(int)*(short *)(param_1 + 0x24a),5,uVar1,0);
  FUN_00375a18(param_1 + 0xc0,(int)*(short *)(param_1 + 0x24c),5,uVar1,0);
  FUN_00370734(param_1 + 0x1a8);
  iVar3 = FUN_003769d8(param_2 + 0x28a0);
  if ((iVar3 == *(short *)(param_1 + 0x22e)) && (iVar3 = FUN_00346964(param_2), iVar3 != 0)) {
    FUN_00370778(param_2);
    FUN_0037073c(param_2,0x2d);
    uVar1 = uRam002aa980;
    *(undefined4 *)(param_1 + 0x1a4) = uRam002aa97c;
    uVar2 = FUN_00371808(param_2,uVar1,0xffffff9d,param_1,0);
    *(undefined2 *)(param_1 + 0x2ac) = uVar2;
  }
  return;
}
