// OoT3D decomp @ 0039def0  name=FUN_0039def0  size=128

void FUN_0039def0(int param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;

  iVar3 = FUN_003769d8(param_2 + 0x28a0);
  if ((iVar3 == 6) && (iVar3 = FUN_00346964(param_2), iVar3 != 0)) {
    bVar1 = *(byte *)(DAT_0039df70 + 0x53);
    if (bVar1 < 3) {
      *(byte *)(DAT_0039df70 + 0x53) = bVar1 + 1;
    }
    uVar2 = DAT_0039df78;
    if (bVar1 != 2) {
      FUN_0036be34(param_2,DAT_0039df7c);
      *(undefined4 *)(param_1 + 0x9ac) = DAT_0039df80;
      return;
    }
    *(ushort *)(DAT_0039df74 + 10) = *(ushort *)(DAT_0039df74 + 10) | 0x80;
    *(undefined4 *)(param_1 + 0x9ac) = uVar2;
  }
  return;
}
