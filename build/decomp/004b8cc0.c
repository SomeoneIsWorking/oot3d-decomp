// OoT3D decomp @ 004b8cc0  name=FUN_004b8cc0  size=112

void FUN_004b8cc0(undefined4 param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *(undefined2 *)(param_2 + 0x2220) = param_3;
  FUN_0036055c(param_1,param_2,DAT_004b8d30,1);
  uVar4 = DAT_004b8d48;
  uVar3 = DAT_004b8d44;
  uVar2 = DAT_004b8d40;
  iVar1 = DAT_004b8d3c;
  *(short *)(param_2 + 0x226a) = (short)(int)(DAT_004b8d34 * *(float *)(DAT_004b8d38 + 0x2c));
  FUN_00360190(uVar2,uVar3,uVar3,uVar4,param_2 + 0x254,param_1,
               *(undefined4 *)(iVar1 + (uint)*(byte *)(param_2 + 0x1b3) * 4 + 0x300),0);
  return;
}

