// OoT3D decomp @ 0011a1d4  name=FUN_0011a1d4  size=356

void FUN_0011a1d4(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;

  iVar2 = *(int *)(param_2 + 0x20ac);
  FUN_003731e0(param_1 + 0x1a4);
  uVar1 = DAT_0011a33c;
  if (*(short *)(param_1 + 0x234) != 0) {
    *(short *)(param_1 + 0x234) = *(short *)(param_1 + 0x234) + -1;
  }
  if ((*(uint *)(DAT_0011a338 + iVar2) & 0x80) == 0) {
    iVar2 = *(int *)(param_2 + 0x20ac);
    if (*(int *)(iVar2 + 0x124) == param_1) {
      *(undefined4 *)(iVar2 + 0x124) = 0;
      *(undefined2 *)(iVar2 + 0x2238) = 100;
      *(byte *)(param_1 + 0xefe) = *(byte *)(param_1 + 0xefe) | 1;
      *(byte *)(*(int *)(param_1 + 0x128) + 0xefe) =
           *(byte *)(*(int *)(param_1 + 0x128) + 0xefe) | 1;
      FUN_00374bb8(uVar1,uVar1,param_2,param_1,(int)*(short *)(param_1 + 0xbe));
    }
    FUN_00374a58(DAT_0011a344,param_1 + 0x1a4,
                 *(undefined4 *)(DAT_0011a340 + *(short *)(param_1 + 0x1c) * 4));
    *(undefined4 *)(param_1 + 0x22c) = DAT_0011a348;
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x2c);
    uVar4 = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(iVar2 + 0x28) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(iVar2 + 0x2c) = uVar3;
    *(undefined4 *)(iVar2 + 0x30) = uVar4;
    if (*(short *)(param_1 + 0x234) == 0) {
      *(undefined2 *)(param_1 + 0x234) = 0x1e;
      if (*(int *)(DAT_0011a34c + 4) == 0) {
        FUN_0036f59c(iVar2,DAT_0011a354);
      }
      else {
        FUN_0036f59c(iVar2,DAT_0011a350);
      }
      (**(code **)(DAT_0011a358 + param_2))(param_2,0xfffffff8);
    }
    iVar2 = FUN_003736fc(uVar1,DAT_0011a35c,param_1 + 0x1a4);
    if (iVar2 != 0) {
      FUN_00375bcc(param_1,DAT_0011a360);
      return;
    }
  }
  return;
}
