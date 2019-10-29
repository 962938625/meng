<li><a href="{dede:field name='typeurl'/}" class="{dede:field.currentstyle/}" ><span aria-hidden="true" class="li_{dede:field.seotitle /} nav_icon"></span>{dede:field name='typename'/}</a>
                <ul>
                  {dede:channel type='son' noself='yes'}
                  <li><a href="[field:typelink/]" target="_self">[field:typename/]</a></li>
                  {/dede:channel}
                </ul>
              </li>