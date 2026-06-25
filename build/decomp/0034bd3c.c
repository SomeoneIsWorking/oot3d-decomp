// OoT3D decomp @ 0034bd3c  name=FUN_0034bd3c  size=104

void FUN_0034bd3c(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = DAT_0034bda4;
  if (*(char *)(param_1 + 0x1a7) != '\x01') {
    iVar2 = *(int *)(DAT_0034bda8 + param_1) +
            (uint)*(ushort *)(*(int *)(DAT_0034bdac + param_1) + 0xf6) + 0x1000021;
    cVar1 = *(char *)(DAT_0034bdb0 + 0x80);
    if ((cVar1 == ';' || cVar1 == '<') || cVar1 == '=') {
      FUN_0036f59c(param_1,DAT_0034bdb4);
    }
  }
  FUN_0036f59c(param_1,iVar2);
  return;
}

