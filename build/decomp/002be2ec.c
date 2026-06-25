// OoT3D decomp @ 002be2ec  name=FUN_002be2ec  size=84

void FUN_002be2ec(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *(char *)(DAT_002be340 + 0x80);
  if ((cVar1 == ';' || cVar1 == '<') || cVar1 == '=') {
    param_3 = 1;
  }
  if ((cVar1 != ';' && cVar1 != '<') && cVar1 != '=') {
    param_3 = 0;
  }
  iVar2 = DAT_002be344;
  if (*(char *)(param_1 + 0x1a7) != '\x01') {
    iVar2 = *(int *)(DAT_002be348 + param_1) +
            (uint)*(ushort *)(*(int *)(DAT_002be34c + param_1) + 0xf6) + 0x1000001;
  }
  FUN_0032d700(param_1 + 0x28,iVar2,param_3);
  return;
}

