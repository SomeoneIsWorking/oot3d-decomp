// OoT3D decomp @ 00208df4  name=FUN_00208df4  size=248

void FUN_00208df4(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;

  if (((*(uint *)(DAT_00208eec + 200) & 1) == 0) &&
     (iVar4 = FUN_003679b4(DAT_00208ef0), puVar3 = DAT_00208f00, uVar2 = DAT_00208efc,
     uVar1 = DAT_00208ef8, iVar4 != 0)) {
    *DAT_00208f00 = DAT_00208ef4;
    puVar3[1] = uVar1;
    puVar3[2] = uVar2;
  }
  FUN_0036055c(param_1,param_2,DAT_00208f04,0);
  puVar3 = DAT_00208f00;
  *(uint *)(param_2 + 0x1710) = *(uint *)(param_2 + 0x1710) | 0x20000000;
  FUN_0036df4c(param_2 + 0x28,puVar3);
  *(undefined2 *)(param_2 + 0xbe) = 0x8000;
  uVar1 = DAT_00208f0c;
  *(undefined2 *)(param_2 + 0x2220) = 0x8000;
  FUN_00360190(DAT_00208f08,uVar1,uVar1,param_2 + 0x254,param_1,
               *(undefined4 *)(*(int *)(param_2 + 0x170c) + 0x100),2);
  FUN_003603f8(param_1,param_2,DAT_00208f10);
  if (*(int *)(DAT_00208f14 + 4) == 0) {
    FUN_003383b0(param_1,param_2,0);
  }
  *(undefined2 *)(param_2 + 0x2238) = 0x14;
  return;
}
