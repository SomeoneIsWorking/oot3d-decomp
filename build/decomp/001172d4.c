// OoT3D decomp @ 001172d4  name=FUN_001172d4  size=68

void FUN_001172d4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;

  iVar2 = FUN_0037571c(param_2);
  iVar1 = DAT_00117320;
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x840) = DAT_00117318;
    *(ushort *)(DAT_0011731c + 0xf6) = *(ushort *)(DAT_0011731c + 0xf6) | 0x800;
    *(undefined2 *)(iVar1 + param_2) = 4;
  }
  return;
}
