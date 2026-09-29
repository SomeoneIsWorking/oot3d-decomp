// OoT3D decomp @ 00217f64  name=FUN_00217f64  size=80

void FUN_00217f64(undefined4 param_1)

{
  char cVar1;
  char *pcVar2;

  pcVar2 = DAT_00217fb4;
  if (*(int *)(DAT_00217fb4 + 4) != 0) {
    *DAT_00217fb4 = '\x02';
  }
  if (*(int *)(pcVar2 + 0xc) != 0) {
    pcVar2[8] = '\x02';
  }
  cVar1 = *pcVar2;
  if (cVar1 == '\x02') {
    pcVar2 = (char *)(uint)(byte)pcVar2[8];
  }
  if (cVar1 != '\x02' || pcVar2 != (char *)0x2) {
    return;
  }
  FUN_00285fa4();
  FUN_00374428(param_1);
  return;
}
