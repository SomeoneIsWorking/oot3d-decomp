// OoT3D decomp @ 00367374  name=FUN_00367374  size=96

void FUN_00367374(int param_1,int param_2)

{
  int iVar1;

  if (*(char *)(param_2 + 8) != '\x04') {
    *(int *)(param_1 + 0x22ac) = *(int *)(param_1 + 0x22ac) + 1;
    iVar1 = FUN_0036c5bc(param_1,(int)(short)*(undefined4 *)(param_1 + 0x22bc));
    if ((iVar1 != 0) && (*(short *)(DAT_003673d4 + iVar1) == 0x25)) {
      FUN_00367c48();
      *(undefined1 *)(param_1 + 0x22a8) = 0;
    }
    *(undefined1 *)(param_1 + 0x22a0) = 3;
  }
  return;
}
