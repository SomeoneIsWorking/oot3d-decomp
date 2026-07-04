// OoT3D decomp @ 0010007c  name=FUN_0010007c  size=108

void FUN_0010007c(uint *param_1,uint *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  bool bVar8;
  
  iVar3 = DAT_001000e8;
  if ((((uint)param_1 | (uint)param_2) & 3) == 0) {
    while( true ) {
      uVar5 = *param_2;
      if ((uVar5 - iVar3 & ~uVar5 & iVar3 << 7) != 0) break;
      *param_1 = uVar5;
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
    }
    do {
      bVar8 = (uVar5 & 0xff) != 0;
      uVar6 = uVar5;
      if (bVar8) {
        uVar6 = uVar5 >> 8;
      }
      *(char *)param_1 = (char)uVar5;
      param_1 = (uint *)((int)param_1 + 1);
      uVar5 = uVar6;
    } while (bVar8);
    return;
  }
  do {
    cVar1 = (char)*param_2;
    pcVar7 = (char *)((int)param_1 + 1);
    *(char *)param_1 = cVar1;
    cVar2 = '\0';
    puVar4 = (uint *)((int)param_2 + 1);
    if (cVar1 != '\0') {
      cVar2 = *(char *)((int)param_2 + 1);
      param_1 = (uint *)((int)param_1 + 2);
      *pcVar7 = cVar2;
      puVar4 = (uint *)((int)param_2 + 2);
    }
    param_2 = puVar4;
  } while (cVar1 != '\0' && cVar2 != '\0');
  return;
}

