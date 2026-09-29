// OoT3D decomp @ 003685f4  name=FUN_003685f4  size=152

void FUN_003685f4(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;

  iVar3 = FUN_0036bba8(param_2,0x18);
  iVar1 = DAT_0036868c;
  if ((*(ushort *)(DAT_0036868c + 0x8a) & 0x400) == 0) {
    if (((iVar3 != 0) || (iVar3 = DAT_0036869c, (*(ushort *)(DAT_0036868c + -0x5e2) & 0x4000) == 0))
       || (iVar3 = DAT_003686a4, (*(ushort *)(DAT_0036868c + -0x5f8) & 4) == 0)) {
      *(short *)(param_1 + 0x116) = (short)iVar3;
      return;
    }
    *(short *)(param_1 + 0x116) = (short)DAT_003686a0;
  }
  else {
    if ((*(ushort *)(DAT_0036868c + 0x8a) & 0x100) == 0) {
      *(short *)(param_1 + 0x116) = (short)DAT_00368690;
    }
    else {
      if ((*(ushort *)(DAT_0036868c + -0x5f8) & 4) == 0) {
        uVar2 = (undefined2)DAT_00368694;
      }
      else {
        uVar2 = (undefined2)DAT_00368698;
      }
      *(undefined2 *)(param_1 + 0x116) = uVar2;
    }
    *(ushort *)(iVar1 + 0x8a) = *(ushort *)(iVar1 + 0x8a) & 0xfeff;
  }
  return;
}
