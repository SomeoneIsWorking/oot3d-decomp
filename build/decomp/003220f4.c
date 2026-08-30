// OoT3D decomp @ 003220f4  name=FUN_003220f4  size=456

void FUN_003220f4(int *param_1,int param_2,int param_3,undefined4 param_4,int param_5,int param_6,
                 int param_7,int param_8)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  short sVar4;
  int iVar5;
  int extraout_r3;
  int *piVar6;
  uint in_fpscr;
  undefined4 uVar7;

  func_0x0030f964();
  *param_1 = extraout_r3;
  *(char *)(param_1 + 0x1d) = (char)*(undefined4 *)(**(int **)(extraout_r3 + 0x18) + 8);
  puVar1 = puRam003222bc;
  param_1[1] = param_2;
  if (((*puVar1 & 1) == 0) && (iVar5 = func_0x003679b4(puRam003222bc), iVar5 != 0)) {
    func_0x0036788c(iRam003222c0);
  }
  piVar6 = *(int **)(iRam003222c0 + 0x17c);
  piVar6[2] = param_5;
  iVar5 = (**(code **)(*piVar6 + 8))(piVar6,*param_1,1);
  uVar2 = uRam003222cc;
  param_1[10] = iVar5;
  piVar6[2] = 0;
  iVar5 = param_1[10];
  *(undefined4 *)(iVar5 + 0x40) = uVar2;
  *(undefined4 *)(iVar5 + 0x44) = uVar2;
  *(undefined4 *)(iVar5 + 0x48) = uVar2;
  func_0x0030fd98(uRam003222d0,param_1[10]);
  uVar3 = uRam003222d4;
  iVar5 = param_1[10];
  *(undefined4 *)(iVar5 + 0x24) = uRam003222d4;
  *(undefined4 *)(iVar5 + 0x28) = uVar3;
  *(undefined4 *)(iVar5 + 0x2c) = uVar3;
  param_1[3] = 0;
  param_1[4] = param_3;
  param_1[5] = (int)param_1;
  param_1[8] = (int)(param_1 + 2);
  if (param_1[10] != 0) {
    func_0x00347774();
  }
  if (param_7 == 0) {
    iVar5 = func_0x0035010c((short)(ushort)*(byte *)(param_1 + 0x1d) * 0x34);
    param_1[0x1e] = iVar5;
    iVar5 = func_0x0035010c((short)(ushort)*(byte *)(param_1 + 0x1d) * 0x34);
    param_1[0x1f] = iVar5;
    *(undefined1 *)((int)param_1 + 0x82) = 1;
  }
  else {
    param_1[0x1e] = param_7;
    param_1[0x1f] = param_8;
  }
  if (param_6 != -1) {
    piVar6 = (int *)func_0x0034807c(param_1[1],param_6);
    if (piVar6 == (int *)0x0) {
      sVar4 = -1;
    }
    else {
      sVar4 = (short)*(undefined4 *)(*piVar6 + *(int *)(*piVar6 + 0x14) + 0x10);
    }
    uVar7 = VectorSignedToFloat((int)sVar4,(byte)(in_fpscr >> 0x15) & 3);
    func_0x00375c08(uVar2,uVar3,uVar7,uVar3,param_1,param_6,0);
  }
  *(int *)(iRam003222d8 + 8) = *(int *)(iRam003222d8 + 8) + 1;
  return;
}
