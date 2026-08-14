// OoT3D decomp @ 0036a924  name=FUN_0036a924  size=228

void FUN_0036a924(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  uVar1 = func_0x00363c10(param_2 + 0x3a58,param_3);
  if (((uVar1 & 0xff) < 0x13) &&
     (param_2 = param_2 + (uVar1 & 0xff) * 0x80, *(int *)(iRam0036aa08 + param_2) != 0)) {
    param_2 = param_2 + 0x3a5c;
  }
  else {
    param_2 = 0;
  }
  if (((*puRam0036aa0c & 1) == 0) && (iVar2 = func_0x003679b4(puRam0036aa0c), iVar2 != 0)) {
    func_0x0036788c(iRam0036aa10);
  }
  piVar4 = *(int **)(iRam0036aa10 + 0x17c);
  piVar4[2] = *(int *)(param_1 + 0x178);
  uVar3 = func_0x00358ef8(param_2 + 0x10,param_4);
  (**(code **)(*piVar4 + 8))(piVar4,uVar3,1);
  piVar4[2] = 0;
  *(int *)(iRam0036aa1c + 0xc) = *(int *)(iRam0036aa1c + 0xc) + 1;
  return;
}

