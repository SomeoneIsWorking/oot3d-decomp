// OoT3D decomp @ 0015b074  name=FUN_0015b074  size=256

void FUN_0015b074(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;

  if ((*(ushort *)(param_1 + 0x1c) & 0x200) == 0) {
    if ((DAT_0015b174 <= *(int *)(param_1 + 0x94)) ||
       ((iVar2 = FUN_0035a3c4(param_2,5), iVar2 == 0 &&
        (iVar2 = FUN_0035a3c4(param_2,7), iVar2 == 0)))) goto LAB_0015b13c;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffffef;
  }
  else {
    if (-1 < *(int *)(param_1 + 0x204)) {
      iVar2 = FUN_0036e864(param_2);
      if (iVar2 != 0) {
        *(undefined4 *)(param_1 + 0x204) = 0xffffffff;
      }
      goto LAB_0015b13c;
    }
    if ((*(byte *)(param_1 + 0x1b5) & 2) == 0) {
      FUN_0037632c(param_1,param_1 + 0x1a4);
      FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0x1a4);
      goto LAB_0015b13c;
    }
  }
  uVar1 = DAT_0015b17c;
  *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0xfcff;
  *(undefined4 *)(param_1 + 0x1fc) = DAT_0015b178;
  FUN_00372244(param_2 + 0x5fcc,0x1e,uVar1);
LAB_0015b13c:
  FUN_00353484(param_1,param_2);
  return;
}
