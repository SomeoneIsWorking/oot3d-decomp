// OoT3D decomp @ 0033187c  name=FUN_0033187c  size=52

void FUN_0033187c(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_003318b8;
  iVar2 = DAT_003318b0;
  uVar1 = *(ushort *)(DAT_003318b0 + 0x8a) & *(ushort *)(DAT_003318b4 + param_1 * 2);
  *(ushort *)(DAT_003318b0 + 0x8a) = uVar1;
  *(ushort *)(iVar2 + 0x8a) = uVar1 | (ushort)(param_2 << *(sbyte *)(iVar3 + param_1));
  return;
}

