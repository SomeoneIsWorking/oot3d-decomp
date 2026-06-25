// OoT3D decomp @ 004bc91c  name=FUN_004bc91c  size=104

void FUN_004bc91c(undefined4 param_1,int param_2)

{
  undefined uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  
  uVar3 = DAT_004bc984;
  uVar1 = *(undefined *)(param_2 + 0x2a6);
  *(undefined *)(param_2 + 0x2a6) = 0;
  FUN_0036055c(param_1,param_2,uVar3);
  *(undefined *)(param_2 + 0x2a6) = uVar1;
  *(uint *)(param_2 + 0x1710) = *(uint *)(param_2 + 0x1710) | 0x20000400;
  cVar2 = *(char *)(DAT_004bc988 + param_2);
  if (cVar2 == 'O') {
    uVar4 = 0x14;
  }
  else {
    if (cVar2 < '\0') {
      *(char *)(param_2 + 0x12ac) = -cVar2;
      return;
    }
    uVar4 = 1;
  }
  *(undefined2 *)(param_2 + 0x2238) = uVar4;
  return;
}

