// OoT3D decomp @ 001cade8  name=FUN_001cade8  size=132

void FUN_001cade8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ushort uVar4;

  iVar1 = FUN_003769d8(param_2 + 0x28a0);
  if ((iVar1 == 6) && (iVar2 = FUN_00346964(param_2), iVar1 = DAT_001cae74, iVar2 != 0)) {
    if (*(int *)(DAT_001cae6c + 4) == 0) {
      uVar4 = *(ushort *)(DAT_001cae6c + 0xf0c);
      if ((uVar4 & 0x1000) == 0) {
        uVar4 = uVar4 | 0x1000;
      }
      else {
        uVar4 = uVar4 | 0x4000;
      }
      *(ushort *)(DAT_001cae6c + 0xf0c) = uVar4;
      uVar3 = DAT_001cae70;
    }
    else {
      *(ushort *)(DAT_001cae6c + 0xf08) = *(ushort *)(DAT_001cae6c + 0xf08) | 0x1000;
      uVar3 = DAT_001cae78;
      *(undefined2 *)(iVar1 + param_1) = 6;
    }
    *(undefined4 *)(param_1 + 0x840) = uVar3;
  }
  return;
}
