// OoT3D decomp @ 00499000  name=FUN_00499000  size=56

void FUN_00499000(int param_1,char *param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  bool bVar3;

  pcVar2 = (char *)(param_1 + -1);
  do {
    pcVar2 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  do {
    bVar3 = param_3 == 0;
    param_3 = param_3 + -1;
    if (bVar3) {
      *pcVar2 = '\0';
      return;
    }
    cVar1 = *param_2;
    *pcVar2 = cVar1;
    param_2 = param_2 + 1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  return;
}
