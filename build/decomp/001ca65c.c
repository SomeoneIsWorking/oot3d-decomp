// OoT3D decomp @ 001ca65c  name=FUN_001ca65c  size=216

void FUN_001ca65c(int param_1,int param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;

  if (((*(uint *)(DAT_001ca7e4 + 4) & 1) == 0) &&
     (iVar4 = FUN_003679b4(DAT_001ca7e8), puVar3 = DAT_001ca7f0, uVar2 = DAT_001ca7ec, iVar4 != 0))
  {
    *DAT_001ca7f0 = DAT_001ca7ec;
    puVar3[1] = uVar2;
    puVar3[2] = uVar2;
  }
  uVar2 = DAT_001ca7f4;
  if (*(char *)(param_1 + 0x1c0) != '\0') {
    *(char *)(param_1 + 0x1c0) = *(char *)(param_1 + 0x1c0) + -1;
  }
  FUN_00373264(param_1,uVar2);
  iVar4 = DAT_001ca80c;
  lVar1 = (ulonglong)(uint)*(byte *)(param_1 + 0x1c0) * (ulonglong)DAT_001ca7f8;
  if ((uint)*(byte *)(param_1 + 0x1c0) + (uint)((ulonglong)lVar1 >> 0x21) * -3 == 0) {
    if (*(char *)(param_1 + 0x1c0) == '\0') {
      *(undefined4 *)(DAT_001ca80c + param_2) = 0;
      FUN_00374428(param_1,iVar4,(int)lVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
