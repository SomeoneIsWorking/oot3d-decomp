// OoT3D decomp @ 004a34d0  name=FUN_004a34d0  size=340

void FUN_004a34d0(int param_1,undefined4 param_2)

{
  undefined uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  short local_1c [2];
  float local_18;
  
  FUN_0036b4ec(param_1 + 0x254);
  iVar2 = FUN_0035d260(param_1);
  if (iVar2 != 0) {
    uVar4 = *(undefined4 *)(param_1 + 0x2d0);
    uVar1 = *(undefined *)(param_1 + 0x2c8);
    uVar3 = FUN_0034d628(param_1);
    uVar3 = FUN_002bdd54(param_1 + 0x254,uVar3);
    FUN_004ba304(param_2,param_1 + 0x254,uVar3,0,uVar1,uVar4);
    FUN_0035e9fc(param_2,param_1 + 0x254,*(undefined4 *)(param_1 + 0x2cc),
                 *(undefined4 *)(param_1 + 0x2d0),DAT_004a3624);
  }
  FUN_0036b3f4(DAT_004a3628,param_1,&local_18,local_1c,param_2);
  iVar2 = FUN_002c3d18(param_2,param_1,DAT_004a362c,1);
  if (iVar2 == 0) {
    if (local_18 == DAT_004a3630) {
      iVar2 = FUN_00370378(param_1 + 0xbe,(int)local_1c[0],(int)*(short *)(param_1 + 0x226a));
      if (iVar2 != 0) {
        FUN_0036055c(param_2,param_1,DAT_004a3634,1);
        uVar3 = FUN_0034d628(param_1);
        FUN_003604f0(param_1 + 0x254,param_2,uVar3);
        *(undefined2 *)(param_1 + 0x2220) = *(undefined2 *)(param_1 + 0xbe);
      }
    }
    else {
      *(short *)(param_1 + 0xbe) = local_1c[0];
      FUN_002c3c7c(param_1,param_2);
    }
    *(undefined2 *)(param_1 + 0x2220) = *(undefined2 *)(param_1 + 0xbe);
  }
  return;
}

